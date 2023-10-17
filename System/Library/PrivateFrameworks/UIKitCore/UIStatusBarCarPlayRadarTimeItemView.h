//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRadarTimeItemView
{
    _Bool _isInternalInstall;	// 16 = 0x10
    _Bool _radarItemEnabled;	// 17 = 0x11
    _Bool _currentlyGatheringLogs;	// 18 = 0x12
}

- (_Bool)_showRadarButtonForInternalInstalls;	// IMP=0x0000000000f46a86
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;	// IMP=0x0000000000f46a01
- (id)_timeImageSet;	// IMP=0x0000000000f46960
- (id)contentsImage;	// IMP=0x0000000000f46784
- (_Bool)usesAdvancedActions;	// IMP=0x0000000000f4677c
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000f4676c
- (_Bool)canBecomeFocused;	// IMP=0x0000000000f4675a
- (_Bool)showsTouchWhenHighlighted;	// IMP=0x0000000000f46748
- (long long)buttonType;	// IMP=0x0000000000f4673d
- (id)highlightImage;	// IMP=0x0000000000f465bf
- (void)dealloc;	// IMP=0x0000000000f4654a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f4636e

@end
