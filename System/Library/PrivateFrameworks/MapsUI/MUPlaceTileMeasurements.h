//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPlaceTileMeasurements : NSObject
{
    double _tileWidth;	// 8 = 0x8
    double _maxTitleHeight;	// 16 = 0x10
    double _maxSubtitleHeight;	// 24 = 0x18
    double _maxFooterHeight;	// 32 = 0x20
    double _deviceScale;	// 40 = 0x28
}

+ (id)defaultMeasurements;	// IMP=0x00600000000a84ff
@property(nonatomic) double deviceScale; // @synthesize deviceScale=_deviceScale;
@property(nonatomic) double maxFooterHeight; // @synthesize maxFooterHeight=_maxFooterHeight;
@property(nonatomic) double maxSubtitleHeight; // @synthesize maxSubtitleHeight=_maxSubtitleHeight;
@property(nonatomic) double maxTitleHeight; // @synthesize maxTitleHeight=_maxTitleHeight;
@property(nonatomic) double tileWidth; // @synthesize tileWidth=_tileWidth;

@end

