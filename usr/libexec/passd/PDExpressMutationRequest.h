//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, PKExpressPassInformation;

@interface PDExpressMutationRequest : NSObject
{
    _Bool _userInitiated;	// 8 = 0x8
    NSString *_passUniqueIdentifier;	// 16 = 0x10
    PKExpressPassInformation *_expressInformation;	// 24 = 0x18
    NSData *_credential;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    long long _cardTypeToRemove;	// 48 = 0x30
    CDUnknownBlockType _cardTypeRemovalCompletion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000016e516
- (id)init;	// IMP=0x001000000016e4dc

@end

