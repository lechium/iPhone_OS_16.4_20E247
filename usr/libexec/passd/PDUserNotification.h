//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, PKApplicationMessageContent;

@interface PDUserNotification : NSObject
{
    _Bool _allowPresentationOverPass;	// 8 = 0x8
    _Bool _reissueBannerOnUpdate;	// 9 = 0x9
    _Bool _active;	// 10 = 0xa
    _Bool _suppressed;	// 11 = 0xb
    _Bool _needsNotificationSettings;	// 12 = 0xc
    _Bool _playsSound;	// 13 = 0xd
    _Bool _preventAutomaticDismissal;	// 14 = 0xe
    _Bool _applicationMessageBadge;	// 15 = 0xf
    unsigned long long _insertionRequirements;	// 16 = 0x10
    unsigned long long _suppressionBehavior;	// 24 = 0x18
    NSString *_passUniqueIdentifier;	// 32 = 0x20
    NSString *_notificationIdentifier;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
    NSString *_customActionRoute;	// 56 = 0x38
    NSString *_customActionVerb;	// 64 = 0x40
    NSString *_customActionURLString;	// 72 = 0x48
    NSDictionary *_customActionQueryParameters;	// 80 = 0x50
    NSString *_customActionTitle;	// 88 = 0x58
    PKApplicationMessageContent *_applicationMessageContent;	// 96 = 0x60
    NSString *_accountIdentifier;	// 104 = 0x68
    long long _assetType;	// 112 = 0x70
    unsigned long long _familyNotificationType;	// 120 = 0x78
}

+ (id)applicationMessageIconForFeature:(unsigned long long)arg1;	// IMP=0x002000000024f3e8
+ (_Bool)supportsCoalescing;	// IMP=0x001000000024ebca
+ (_Bool)allowReinsertionAfterDismissal;	// IMP=0x001000000024ebc2
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000024e545
- (void).cxx_destruct;	// IMP=0x001000000024f981
@property(nonatomic) unsigned long long familyNotificationType; // @synthesize familyNotificationType=_familyNotificationType;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool applicationMessageBadge; // @synthesize applicationMessageBadge=_applicationMessageBadge;
@property(retain, nonatomic) PKApplicationMessageContent *applicationMessageContent; // @synthesize applicationMessageContent=_applicationMessageContent;
@property(copy, nonatomic) NSString *customActionTitle; // @synthesize customActionTitle=_customActionTitle;
@property(copy, nonatomic) NSDictionary *customActionQueryParameters; // @synthesize customActionQueryParameters=_customActionQueryParameters;
@property(copy, nonatomic) NSString *customActionURLString; // @synthesize customActionURLString=_customActionURLString;
@property(copy, nonatomic) NSString *customActionVerb; // @synthesize customActionVerb=_customActionVerb;
@property(copy, nonatomic) NSString *customActionRoute; // @synthesize customActionRoute=_customActionRoute;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(readonly, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(nonatomic) _Bool preventAutomaticDismissal; // @synthesize preventAutomaticDismissal=_preventAutomaticDismissal;
@property(nonatomic) _Bool playsSound; // @synthesize playsSound=_playsSound;
@property(readonly, nonatomic) _Bool needsNotificationSettings; // @synthesize needsNotificationSettings=_needsNotificationSettings;
@property(nonatomic, getter=isSuppressed) _Bool suppressed; // @synthesize suppressed=_suppressed;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool reissueBannerOnUpdate; // @synthesize reissueBannerOnUpdate=_reissueBannerOnUpdate;
@property(nonatomic) _Bool allowPresentationOverPass; // @synthesize allowPresentationOverPass=_allowPresentationOverPass;
@property(nonatomic) unsigned long long suppressionBehavior; // @synthesize suppressionBehavior=_suppressionBehavior;
@property(nonatomic) unsigned long long insertionRequirements; // @synthesize insertionRequirements=_insertionRequirements;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000024f5cc
- (id)actionURL;	// IMP=0x001000000024ebea
- (unsigned long long)coalesceWithExistingUserNotification:(id)arg1;	// IMP=0x001000000024ebe2
@property(readonly, nonatomic) unsigned long long notificationType;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (_Bool)isCashFamilyNotification;	// IMP=0x001000000024eba0
- (id)description;	// IMP=0x001000000024ea2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000024e876
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000024e54d
- (id)initWithNotificationIdentifier:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x001000000024e46a
- (id)initWithNotificationIdentifier:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x001000000024e38f
- (id)_payLaterApplicationMessageContentWithTitleText:(id)arg1 messageText:(id)arg2;	// IMP=0x00100000002eb4d7
- (id)_payLaterApplicationMessageGroupDescriptor;	// IMP=0x00100000002eb480
- (void)updatePassNameForNotificationContent:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000002eb36c

@end
