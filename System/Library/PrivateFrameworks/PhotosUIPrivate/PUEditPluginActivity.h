//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class PUEditPlugin;

__attribute__((visibility("hidden")))
@interface PUEditPluginActivity : UIActivity
{
    PUEditPlugin *_plugin;	// 8 = 0x8
}

+ (long long)activityCategory;	// IMP=0x006000000014d87c
- (void).cxx_destruct;	// IMP=0x000000000014d869
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (_Bool)_isHiddenByDefault;	// IMP=0x000000000014d850
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000014d848
- (id)_activitySettingsImage;	// IMP=0x000000000014d7f8
- (id)_activityImage;	// IMP=0x000000000014d7a8
- (id)activityTitle;	// IMP=0x000000000014d758
- (id)activityType;	// IMP=0x000000000014d6de
- (id)initWithPlugin:(id)arg1;	// IMP=0x000000000014d670

@end
