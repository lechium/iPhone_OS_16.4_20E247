//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugLogMessage : NSObject
{
    NSString *_string;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 16 = 0x10
}

+ (id)messageWithStyle:(unsigned long long)arg1 string:(id)arg2;	// IMP=0x0060000000e2eacf
+ (id)messageWithPrefix:(id)arg1 color:(id)arg2 string:(id)arg3;	// IMP=0x0060000000e2e75c
+ (id)messageWithFormat:(id)arg1;	// IMP=0x0060000000e2e5bb
+ (id)messageWithString:(id)arg1;	// IMP=0x0060000000e2e4be
+ (id)messageWithNewline;	// IMP=0x0060000000e2e493
- (void).cxx_destruct;	// IMP=0x0000000000e2ef62
- (id)attributedDescription;	// IMP=0x0000000000e2ef50
- (id)description;	// IMP=0x0000000000e2ef3e
- (id)_attributedStringRepresentation;	// IMP=0x0000000000e2eef6
- (id)_stringRepresentation;	// IMP=0x0000000000e2eebc
- (_Bool)_isTransparent;	// IMP=0x0000000000e2eeb4
- (_Bool)_isNode;	// IMP=0x0000000000e2eeac
- (id)initWithString:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000e2e386

@end

