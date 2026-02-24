/* Lumina Telemetry Packet v1.0
   This structure is shared across all Lumina instances.
*/

struct LuminaTelemetry {
    // 🛰️ Mission Identity
    int pluginID;           // Unique ID for the instance (Press, Base, Dust, etc.)
    bool isDocked;          // Connection status to Lumina Control

    // 📊 Telemetry Data
    float gainReduction[32]; // GR values across the frequency spectrum
    float peakFrequency;     // The most "crowded" frequency detected
    float rmsLevel;          // Overall signal "pressure"

    // ⚙️ Control Downlink
    float externalCurve[32]; // EQ curve sent BACK from Lumina Control
    bool bypassCommand;      // Master bypass from Control Center
};

