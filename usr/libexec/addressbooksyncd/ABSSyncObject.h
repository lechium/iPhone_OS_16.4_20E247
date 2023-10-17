//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABSSyncObject : NSObject
{
    long long _changeType;	// 8 = 0x8
}

+ (void)oops;	// IMP=0x002000000003338e
+ (int)sequenceNumber;	// IMP=0x0010000000033331
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (_Bool)matches:(id)arg1;	// IMP=0x0010000000033319
- (id)createProtobufWithOptions:(id)arg1;	// IMP=0x0010000000033311

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
