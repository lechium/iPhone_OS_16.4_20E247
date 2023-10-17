//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h"

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownFeedback;	// 8 = 0x8
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownAudioFeedback;	// 16 = 0x10
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpFeedback;	// 24 = 0x18
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpAudioFeedback;	// 32 = 0x20
}

+ (id)defaultConfiguration;	// IMP=0x006000000069a6e0
- (void).cxx_destruct;	// IMP=0x000000000069acb4
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback; // @synthesize clickDownFeedback=_clickDownFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback; // @synthesize clickUpAudioFeedback=_clickUpAudioFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback; // @synthesize clickUpFeedback=_clickUpFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback; // @synthesize clickDownAudioFeedback=_clickDownAudioFeedback;
- (void)setclickDownFeedback:(id)arg1;	// IMP=0x000000000069aaf4
- (id)feedbackKeyPaths;	// IMP=0x000000000069a9da
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
- (long long)requiredSupportLevel;	// IMP=0x000000000069a4af

@end
