//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PRSceneClientSettings-Protocol.h>

@class UIColor;

@protocol PRRenderingSceneClientSettings <PRSceneClientSettings>
@property(readonly, nonatomic) struct CGSize pr_contentSize;
@property(readonly, nonatomic) _Bool pr_handlesWakeAnimation;
@property(readonly, nonatomic) unsigned long long pr_significantEventOptions;
@property(readonly, nonatomic) unsigned long long pr_significantEventTime;
@property(readonly, nonatomic) _Bool pr_inExtendedRenderSession;
@property(readonly, nonatomic) UIColor *pr_averageColor;
@end

