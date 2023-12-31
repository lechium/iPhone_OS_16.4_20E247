//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol UGCCommunityAcknowledgementOptions <NSObject>
@property(readonly, nonatomic) _Bool shouldDismissAutomatically;
@property(copy, nonatomic) NSString *primaryButtonTitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long acknowledgementOptionsType;

@optional
@property(nonatomic) _Bool showsInternalStatusLink;
@property(nonatomic) double timeToAutomaticDismissal;
@end

