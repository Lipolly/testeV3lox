## Connections


```mermaid
   graph LR

  A[VL53L0X]; 
  B[STM32F103C8T6];
  A --> C[SDA];
  A --> D[SCL];
  A --> E[GND];
  A --> F[VCC];
  A --> G[XSHUT];
  
  C --> H[PB7];
  D --> I[PB6];
  E --> J[GND];
  F --> K[3.3];
  G --> L[3.3];
  
  H --> B;
  I --> B;
  J --> B;
  K --> B;
  L --> B;
```
