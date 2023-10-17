//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIFeedbackVisualizer : NSObject
{
    UIWindow *_visualFeedbackWindow;	// 8 = 0x8
    NSMapTable *_engineLayers;	// 16 = 0x10
}

+ (id)sharedVisualizer;	// IMP=0x00600000006da384
- (void).cxx_destruct;	// IMP=0x00000000006dbb63
@property(retain, nonatomic) NSMapTable *engineLayers; // @synthesize engineLayers=_engineLayers;
@property(retain, nonatomic) UIWindow *visualFeedbackWindow; // @synthesize visualFeedbackWindow=_visualFeedbackWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000006dba55
- (void)_showVisualForFeedback:(id)arg1;	// IMP=0x00000000006db3ed
- (void)cancelVisualForFeedback:(id)arg1;	// IMP=0x00000000006db27b
- (void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2;	// IMP=0x00000000006db065
- (void)_updateEngine:(id)arg1;	// IMP=0x00000000006dab82
- (void)addEngine:(id)arg1;	// IMP=0x00000000006dab57
- (id)_colorForFeedback:(id)arg1;	// IMP=0x00000000006daaac
- (id)_colorForEngineState:(long long)arg1;	// IMP=0x00000000006da984
- (id)_colorForEngine:(id)arg1;	// IMP=0x00000000006da6f2
- (id)_monogramForEngine:(id)arg1;	// IMP=0x00000000006da546
- (id)init;	// IMP=0x00000000006da409

@end
