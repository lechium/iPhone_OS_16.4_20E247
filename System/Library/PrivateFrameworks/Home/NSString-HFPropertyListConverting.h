//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HFPropertyListConverting)
+ (id)hf_stringWithFormat:(id)arg1 arguments:(id)arg2;	// IMP=0x0010000000181abd
+ (id)hf_formattedPersonNameForFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0010000000181298
- (id)hf_stringByTrimmingTrailingHexCode;	// IMP=0x00100000001818c1
- (unsigned long long)hf_countForSubstring:(id)arg1;	// IMP=0x001000000018187c
- (id)hf_toHexString:(char *)arg1 length:(unsigned int)arg2;	// IMP=0x00100000001817f1
- (unsigned int)hf_UTF8Length;	// IMP=0x00100000001817da
@property(readonly, nonatomic) _Bool hf_containsOnlyDecimalDigits;
@property(readonly, nonatomic) NSString *hf_extractDecimalDigits;
- (id)hf_stringByLowercasingFirstWord;	// IMP=0x0010000000181658
- (id)hf_stringByCapitalizingFirstWord;	// IMP=0x001000000018162a
- (id)hf_stringByTransformingFirstWordUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000181396
- (_Bool)hf_isEmail;	// IMP=0x001000000018120e
- (_Bool)hf_isPhoneNumber;	// IMP=0x00100000001810d1
- (id)hf_SHA256;	// IMP=0x0010000000181027
- (id)hf_SHA1;	// IMP=0x0010000000180f7d
- (_Bool)prefersDynamicString;	// IMP=0x00100000002a8b30
- (id)stringWithAttributes:(id)arg1;	// IMP=0x00100000002a8ad4
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;	// IMP=0x00100000002a8a78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
