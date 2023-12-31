//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSDRegistrationListener : NSObject
{
    NSMutableSet *_completionBlocks;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000002ec690
- (void).cxx_destruct;	// IMP=0x00200000002ece70
@property(retain, nonatomic) NSMutableSet *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void)registrationController:(id)arg1 allRegistrationsSucceeded:(id)arg2;	// IMP=0x00100000002eccf0
- (void)_callBlocksWithResult:(_Bool)arg1 registrations:(id)arg2 error:(id)arg3;	// IMP=0x00100000002eca80
- (void)removeBlockForIdentifier:(id)arg1;	// IMP=0x00100000002eca20
- (id)addBlockForRegistrationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ec930
- (void)dealloc;	// IMP=0x00100000002ec8b0
- (id)init;	// IMP=0x00100000002ec750

@end

