//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIPointerTextBehaviorSettings : PTSettings
{
    double _regionCaptureMultiplier;	// 8 = 0x8
    double _textLineRegionPadding;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x0060000000cb28ad
@property(nonatomic) double textLineRegionPadding; // @synthesize textLineRegionPadding=_textLineRegionPadding;
@property(nonatomic) double regionCaptureMultiplier; // @synthesize regionCaptureMultiplier=_regionCaptureMultiplier;
- (void)setDefaultValues;	// IMP=0x0000000000cb2847

@end

