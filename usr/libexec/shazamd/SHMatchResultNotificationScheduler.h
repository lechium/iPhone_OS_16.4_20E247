//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, SHAttribution, SHMatchedMediaItem;
@protocol SHMatchResultNotificationContentDeliverer;

@interface SHMatchResultNotificationScheduler : NSObject
{
    SHMatchedMediaItem *_currentMediaItem;	// 8 = 0x8
    NSUUID *_currentSignatureID;	// 16 = 0x10
    SHAttribution *_attribution;	// 24 = 0x18
    id <SHMatchResultNotificationContentDeliverer> _contentDeliverer;	// 32 = 0x20
}

+ (id)userNotificationCenter;	// IMP=0x002000000000cd40
+ (void)setUserNotificationCenter:(id)arg1;	// IMP=0x000000000000cd2c
- (void).cxx_destruct;	// IMP=0x002000000000d509
@property(readonly, nonatomic) id <SHMatchResultNotificationContentDeliverer> contentDeliverer; // @synthesize contentDeliverer=_contentDeliverer;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) NSUUID *currentSignatureID; // @synthesize currentSignatureID=_currentSignatureID;
@property(retain, nonatomic) SHMatchedMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
- (void)sendMatchNotification:(id)arg1;	// IMP=0x001000000000d3f2
- (void)sendNotificationForResponse:(id)arg1;	// IMP=0x001000000000d2a6
- (void)sendAnalyticsEventForMatch:(id)arg1;	// IMP=0x001000000000d175
- (void)sendNotificationForNoMatch;	// IMP=0x001000000000d0af
- (_Bool)canSendNotificationForNoMatchSignatureID:(id)arg1;	// IMP=0x001000000000d042
- (void)sendNotificationForMatch:(id)arg1;	// IMP=0x001000000000cf1c
- (_Bool)canSendNotificationForMatch:(id)arg1;	// IMP=0x001000000000ce1a
- (id)initWithAttribution:(id)arg1;	// IMP=0x001000000000cd51

@end

