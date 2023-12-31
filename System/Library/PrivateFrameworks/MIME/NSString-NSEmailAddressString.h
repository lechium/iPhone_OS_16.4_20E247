//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (NSEmailAddressString)
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;	// IMP=0x0050000000003a58
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x005000000001c717
- (id)mf_addressCommentPersonNameComponents;	// IMP=0x00100000000040ee
- (id)mf_emailAddressesWithEquivalentDomains;	// IMP=0x0010000000003e4f
- (id)mf_copyIDNAEncodedEmailAddress;	// IMP=0x0010000000003e1a
- (id)mf_copyIDNADecodedEmailAddress;	// IMP=0x0010000000003de5
- (id)mf_copyDisplayEmailAddress;	// IMP=0x0010000000003d61
- (_Bool)mf_isEqualToAddress:(id)arg1;	// IMP=0x0010000000003d4f
- (id)mf_addressDomain;	// IMP=0x0010000000003ccd
- (struct _NSRange)mf_rangeOfAddressDomain;	// IMP=0x0010000000003cb1
- (_Bool)mf_isLegalEmailAddress;	// IMP=0x0010000000003c9f
- (_Bool)mf_isLegalCommentedEmailAddress;	// IMP=0x0010000000003c8d
- (id)mf_copyAddressComment;	// IMP=0x0010000000003a2d
- (id)mf_addressComment;	// IMP=0x0010000000003a1b
- (id)mf_uncommentedAddressRespectingGroups;	// IMP=0x0010000000003a09
- (id)mf_uncommentedAddress;	// IMP=0x00100000000039f7
- (id)mf_copyUncommentedAddress;	// IMP=0x00100000000039cc
- (id)mf_applyTransform:(id)arg1;	// IMP=0x001000000001bdd1
- (id)mf_copyDisplayString;	// IMP=0x001000000001cba3
- (id)mf_copyDisplayStringInRange:(struct _NSRange)arg1;	// IMP=0x001000000001cacd
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;	// IMP=0x001000000001c8c3
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x001000000001c8af
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;	// IMP=0x001000000001c75a
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)arg1;	// IMP=0x001000000002014c
- (id)mf_bestMimeCharsetUsingHint:(unsigned int)arg1;	// IMP=0x001000000001fb17
- (id)_mf_bestMimeCharset:(id)arg1;	// IMP=0x001000000001f8f7
- (id)mf_bestMimeCharset;	// IMP=0x001000000001f8e0
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)arg1;	// IMP=0x00100000000224ee
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned int)arg1;	// IMP=0x0010000000021c75
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned int)arg1;	// IMP=0x0010000000020b17
@end

