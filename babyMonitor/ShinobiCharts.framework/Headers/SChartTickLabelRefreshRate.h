//
//  SChartTickLabelRefreshRate.h
//  ShinobiCharts
//
//  Copyright 2015 Scott Logic Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Every time the chart is panned or zoomed, its tick labels are recalulated and refreshed. This can be a CPU intensive operation, particularly on older devices.
 *  
 *  This class provides the ability to control the rate at which the labels are recalculated, which can improve the chart's performance at the cost of your labels lagging slightly behind the plotted region.
 */
@protocol SChartTickLabelRefreshRate <NSObject, NSCopying>

/**
 *  Decides whether or not the tick labels should be recalculated.
 *
 *  Default implementation is `SChartTickLabelRefreshRateDeviceBased`.
 *
 *  @return Whether the tick labels should be recalculated.
 */
- (BOOL)shouldRecalculate;

/**
 *  This method is called when:
 *  - Momentum panning or zooming stops on the axis
 *  - The axis label format changes
 */
- (void)reset;

@end

NS_ASSUME_NONNULL_END

