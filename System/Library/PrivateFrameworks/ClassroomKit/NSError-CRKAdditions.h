//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CRKAdditions)
+ (id)crk_errorWithPOSIXCode:(int)arg1;	// IMP=0x008000000000f06d
+ (id)crk_errorForSecurityOSStatus:(int)arg1;	// IMP=0x008000000000ef86
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorField:(id)arg2 andValue:(id)arg3;	// IMP=0x0080000000087401
+ (id)crk_topLevelUserIsNeitherLeaderNorMemberErrorWithUserIdentifier:(id)arg1;	// IMP=0x008000000008732c
+ (id)crk_topLevelUserIsBothLeaderAndMemberErrorWithUserIdentifier:(id)arg1;	// IMP=0x0080000000087257
+ (id)crk_allOrNoneKeysErrorWithProvidedKeys:(id)arg1 allOrNoneKeys:(id)arg2;	// IMP=0x0080000000087156
+ (id)crk_malformedProfileErrorWithField:(id)arg1 value:(id)arg2;	// IMP=0x008000000008713c
+ (id)crk_unsupportedValueErrorWithField:(id)arg1 value:(id)arg2;	// IMP=0x008000000008711f
+ (id)crk_valueNotUniqueErrorWithField:(id)arg1 value:(id)arg2;	// IMP=0x0080000000087102
+ (id)crk_missingFieldErrorWithField:(id)arg1;	// IMP=0x008000000008702e
+ (id)crk_badFieldTypeErrorWithField:(id)arg1;	// IMP=0x0080000000086f59
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorDictionary:(id)arg2;	// IMP=0x0080000000086f33
@end

