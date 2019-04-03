#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NMFGeometry.h"
#import "NMFOverlay.h"

NS_ASSUME_NONNULL_BEGIN

@class NMGPolygon;

/**
 지도에 도형을 나타내는 오버레이.
 */
@interface NMFPolygonOverlay : NMFOverlay

/**
 면의 색상.
 
 기본값은 `UIColor.whiteColor`입니다.
 */
@property (nonatomic, copy) UIColor *fillColor;

/**
 테두리의 두께. pt 단위. `0`일 경우 테두리가 그려지지 않습니다.
 
 기본값은 `0`입니다.
 */
@property (nonatomic) NSUInteger outlineWidth;

/**
 테두리의 색상.
 
 기본값은 `UIColor.blackColor`입니다.
 */
@property (nonatomic, copy) UIColor *outlineColor;

/**
 폴리곤 객체와 색상을 지정하여 폴리곤 오버레이를 생성합니다.

 @param polygon 폴리곤 객체.
 @param fillColor 폴리곤을 채울 색상.
 @return `NMFPolygonOverlay` 객체.
 */
+ (instancetype)polygonOverlay:(NMGPolygon *)polygon fillColor:(UIColor *)fillColor;

/**
 폴리곤 객체와 색상을 지정하여 폴리곤 오버레이를 생성합니다.

 @param polygon 폴리곤 객체.
 @return `NMFPolygonOverlay` 객체.
 */
+ (instancetype)polygonOverlay:(NMGPolygon *)polygon;

/**
 폴리곤 오버레이를 생성한 이후 폴리곤을 갱신하기 위한 목적으로 사용할 수 있습니다.

 @param polygon 폴리곤 객체.
 */
- (void)updatePolygon:(NMGPolygon *)polygon;
@end

NS_ASSUME_NONNULL_END
