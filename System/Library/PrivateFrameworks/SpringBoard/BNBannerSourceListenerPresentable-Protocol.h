//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BNPresentable-Protocol.h>
#import <SpringBoard/BNPresentableObservable-Protocol.h>
#import <SpringBoard/BNPresentableUniquelyIdentifying-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>

@class FBScene, NSString;
@protocol BNBannerSourceListenerPresentableDelegate, BNPresentable, BNPresentableSpecifying;

@protocol BNBannerSourceListenerPresentable <BSInvalidatable, BNPresentable, BNPresentableUniquelyIdentifying, BNPresentableObservable>
@property(nonatomic) __weak id <BNBannerSourceListenerPresentableDelegate> delegate;
@property(readonly, nonatomic) int bannerAppearState;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) id <BNPresentable> presentable;
- (void)handleTemplateContentEvent:(long long)arg1;
- (void)makeReadyIfPossible;
- (id)initWithWithPresentable:(id <BNPresentable>)arg1;
- (id)initWithWithSpecification:(id <BNPresentableSpecifying>)arg1 serviceDomain:(NSString *)arg2 readyCompletion:(void (^)(id <BNBannerSourceListenerPresentable>, NSError *))arg3;

@optional
@property(readonly, nonatomic) FBScene *scene;
@property(readonly, nonatomic, getter=isContentHosted) _Bool contentHosted;
@end
