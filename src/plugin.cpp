/**
 * @file plugin.cpp
 * @brief The main file of the plugin
 */

#include <LoggerAPI.h>

#include "version.h"

// We recommend using the global logger.
extern Logger logger;

/**
 * @brief The entrypoint of the plugin. DO NOT remove or rename this function.
 *        
 */
void PluginInit()
{
    // Your code here
    Logger logger(PLUGIN_NAME);
    logger.info("Hello, world!");
}
