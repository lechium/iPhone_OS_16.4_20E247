//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableArray, NSMutableDictionary, RMPersistentActiveIdentifiers;
@protocol RMConfigurationPublisherDelegate;

@interface RMConfigurationPublisher : NSObject
{
    NSObject *_startLock;	// 8 = 0x8
    NSObject *_notificationLock;	// 16 = 0x10
    NSObject *_pluginsLock;	// 24 = 0x18
    _Bool _started;	// 32 = 0x20
    NSManagedObjectContext *_context;	// 40 = 0x28
    RMPersistentActiveIdentifiers *_persistentActiveIdentifiers;	// 48 = 0x30
    NSMutableArray *_plugins;	// 56 = 0x38
    NSMutableDictionary *_eventStreamSubscriptionByToken;	// 64 = 0x40
    id <RMConfigurationPublisherDelegate> _delegate;	// 72 = 0x48
}

+ (void)reprocessActiveConfigurations;	// IMP=0x0040000000024cb4
+ (id)_start;	// IMP=0x001000000002392b
+ (void)start;	// IMP=0x0010000000023909
+ (id)sharedConfigurationPublisher;	// IMP=0x00100000000238a4
- (void).cxx_destruct;	// IMP=0x002000000002669d
@property(nonatomic) __weak id <RMConfigurationPublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *eventStreamSubscriptionByToken; // @synthesize eventStreamSubscriptionByToken=_eventStreamSubscriptionByToken;
@property(retain, nonatomic) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) RMPersistentActiveIdentifiers *persistentActiveIdentifiers; // @synthesize persistentActiveIdentifiers=_persistentActiveIdentifiers;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)_notifySubscribersWithConfigurationTypes:(id)arg1;	// IMP=0x00100000000262a9
- (void)_notifyChangedConfigurationsForTypes:(id)arg1;	// IMP=0x00100000000260f4
- (void)_notifyChangedConfigurationsIfNeededWithStatusUpdate:(_Bool)arg1;	// IMP=0x0010000000025774
- (void)_notifyChangedConfigurationsIfNeeded;	// IMP=0x001000000002575d
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x0010000000024d79
- (void)_reprocessActiveConfigurations;	// IMP=0x0010000000024cf8
- (id)_createInternalPlugins;	// IMP=0x0010000000024c33
- (void)_loadAllConfigurationSubscribersAllowingThemToCheckForChanges;	// IMP=0x00100000000246c6
- (void)_removeEventStreamSubscriberForToken:(unsigned long long)arg1;	// IMP=0x001000000002442d
- (void)_addEventStreamSubscriberWithSubscription:(id)arg1;	// IMP=0x001000000002417b
- (void)_start;	// IMP=0x0010000000023f0c
- (id)initWithPersistentActiveIdentifiers:(id)arg1 context:(id)arg2;	// IMP=0x0010000000023df5

@end

