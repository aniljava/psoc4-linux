/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
	CY_SYS_PINS_SET_DRIVE_MODE(CYREG_PRT1_PC, 2u, CY_SYS_PINS_DM_RES_UP);
    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        CY_SYS_PINS_SET_PIN(CYREG_PRT1_DR, 2u);
        CyDelay(500);
        CY_SYS_PINS_CLEAR_PIN(CYREG_PRT1_DR, 2u);
        CyDelay(500);
    }
}

/* [] END OF FILE */
