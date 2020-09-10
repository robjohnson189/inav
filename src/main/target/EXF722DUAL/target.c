/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/dma.h"

// Board hardware definitions
BUSDEV_REGISTER_SPI_TAG(busdev_imu0,    DEVHW_MPU6500,  MPU6500_0_SPI_BUS,  MPU6500_0_CS_PIN,   MPU6500_0_EXTI_PIN,     0,  DEVFLAGS_NONE,  IMU_0_ALIGN);
BUSDEV_REGISTER_SPI_TAG(busdev_imu1,    DEVHW_MPU6500,  MPU6500_1_SPI_BUS,  MPU6500_1_CS_PIN,   MPU6500_1_EXTI_PIN,     1,  DEVFLAGS_NONE,  IMU_1_ALIGN);

const timerHardware_t timerHardware[] = {
    //DEF_TIM(TIM5,  CH1, PA0,  TIM_USE_CAMERA_CONTROL, 0, 0),

    DEF_TIM(TIM9,  CH2, PA3,  TIM_USE_PPM ,   0, 0), // PPM

    DEF_TIM(TIM8,  CH3, PC8,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,  0, 1), // ESC 1
    DEF_TIM(TIM8,  CH1, PC6,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,  0, 0), // ESC 2
    DEF_TIM(TIM8,  CH4, PC9,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,  0, 0), // ESC 3
    DEF_TIM(TIM8,  CH2, PC7,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,  0, 1), // ESC 4

    DEF_TIM(TIM4,  CH1, PB6,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,  0, 0), // ESC 5
    DEF_TIM(TIM4,  CH2, PB7,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,  0, 0), // ESC 6

    DEF_TIM(TIM3,  CH4, PB1,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,  0, 0), // ESC 7
    DEF_TIM(TIM3,  CH3, PB0,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,  0, 0), // ESC 8

    DEF_TIM(TIM2,  CH2, PA1,  TIM_USE_LED,    0, 0), // LED Strip
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
