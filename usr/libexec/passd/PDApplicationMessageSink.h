//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PDApplicationMessageManager, PDDatabaseManager;
@protocol PDApplicationMessageProvider;

@interface PDApplicationMessageSink : NSObject
{
    _Atomic unsigned char _connectionStatus;	// 8 = 0x8
    PDApplicationMessageManager *_manager;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    long long _source;	// 32 = 0x20
    id <PDApplicationMessageProvider> _provider;	// 40 = 0x28
}

@property(readonly, nonatomic) NSArray *registrations;
@property(readonly, nonatomic) long long source;
- (void)didUpdateMessageContentForIdentifier:(id)arg1;	// IMP=0x0010000000368d37
- (_Bool)hasMessageWithIdentifier:(id)arg1;	// IMP=0x0010000000368cd2
- (void)unregisterMessageForIdentifier:(id)arg1;	// IMP=0x0010000000368abc
- (_Bool)registerOrUpdateMessageForIdentifier:(id)arg1 withRequest:(id)arg2;	// IMP=0x00100000003689c9
- (_Bool)updateMessageForIdentifier:(id)arg1 withRequest:(id)arg2;	// IMP=0x00100000003685fc
- (_Bool)registerMessageForIdentifier:(id)arg1 withRequest:(id)arg2;	// IMP=0x00100000003683d8
- (id)init;	// IMP=0x0010000000368240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
