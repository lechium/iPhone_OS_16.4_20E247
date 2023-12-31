//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSIdentityAndRecordInfoProvider : NSObject
{
    NSString *_personaString;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

+ (id)_providerWithIdentity:(id)arg1 record:(id)arg2;	// IMP=0x001000000000ebd7
- (void).cxx_destruct;	// IMP=0x000000000000ec6b
- (id)fetchWrappedInfoWithError:(out id *)arg1;	// IMP=0x000000000000ec47
- (id)_initWithIdentity:(id)arg1 record:(id)arg2;	// IMP=0x000000000000ea34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

