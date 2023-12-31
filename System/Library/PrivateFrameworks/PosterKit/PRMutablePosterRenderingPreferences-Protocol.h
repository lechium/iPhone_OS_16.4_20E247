//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PRMutablePosterPreferences-Protocol.h>

@class NSDate, UIColor;

@protocol PRMutablePosterRenderingPreferences <PRMutablePosterPreferences>
@property(retain, nonatomic) NSDate *nextWakeDate;
@property(nonatomic) unsigned long long significantEventTime;
@property(nonatomic) _Bool handlesWakeAnimation;
@property(nonatomic) unsigned long long significantEventOptions;
@property(retain, nonatomic) UIColor *averageColor;
@end

