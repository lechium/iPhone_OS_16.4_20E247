//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject
{
}

+ (void)_escapeCharacters:(const unsigned short *)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(_Bool)arg3 inString:(id)arg4 appendingToString:(struct __CFString *)arg5;	// IMP=0x001000000003b57e
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString *)arg3;	// IMP=0x0010000000473ad8
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;	// IMP=0x000000000003b41d
@property(readonly) NSString *closingTagString;
@property(readonly) NSString *contentString;
@property(readonly) NSString *openingTagString;
@property(readonly) NSString *XMLString;
- (id)description;	// IMP=0x0000000000473ac6
@property(retain) NSString *stringValue; // @dynamic stringValue;
@property(readonly) NSString *name; // @dynamic name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000473a15

@end

