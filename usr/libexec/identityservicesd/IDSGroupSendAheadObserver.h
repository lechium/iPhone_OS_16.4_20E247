//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSGroupSendAheadObserver : NSObject
{
    NSString *_topic;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000044ea90
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;	// IMP=0x001000000044e750
- (void)_sendAheadGroup:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000044d910
- (id)initWithProtectionSpace:(long long)arg1;	// IMP=0x001000000044d810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
