//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;	// IMP=0x0050000000001814
+ (id)WF_ignorableCharacterSet;	// IMP=0x0050000000001737
- (id)WF_stringWithMostSignificatDomainPart;	// IMP=0x0010000000001efb
- (_Bool)_isIPv4DomainAddress;	// IMP=0x0010000000001e64
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x0010000000001e25
- (long long)WF_numericCompare:(id)arg1;	// IMP=0x0010000000001ddd
- (id)WF_fuzzyStringWithWordLength:(int)arg1;	// IMP=0x0010000000001d33
- (id)WF_stringByConvertingSpacesInHTMLSpaces;	// IMP=0x0010000000001d13
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000001c46
- (id)WF_stringByEscapingPrintfArguments;	// IMP=0x0010000000001c26
- (id)WF_stringByRemovingWord:(id)arg1;	// IMP=0x0010000000001b1e
- (struct _NSRange)WF_rangeOfWord:(id)arg1;	// IMP=0x00100000000019a5
- (_Bool)WF_containsWord:(id)arg1;	// IMP=0x0010000000001982
- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000195f
- (_Bool)WF_containsString:(id)arg1;	// IMP=0x0010000000001948
@end

