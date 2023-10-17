//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APXPCConnection, NSString, Protocol;

@interface APMetricReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d690e
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)connectionInterrupted;	// IMP=0x00100000000d6822
- (void)connectionInvalidated;	// IMP=0x00100000000d6751
- (void)extendCollectionClassesForExportedInterface:(id)arg1;	// IMP=0x00100000000d66b3
@property(readonly) id exportedObject;
@property(readonly) Protocol *exportedInterface;
- (void)terminateConnection;	// IMP=0x00100000000d660f
- (void)receivedMetric:(id)arg1;	// IMP=0x00100000000d5fc0
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000d5f55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
