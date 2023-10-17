//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKGraphSeriesBlockCoordinate <NSObject>
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
@end
