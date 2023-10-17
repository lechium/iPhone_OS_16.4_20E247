//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRTypologyCandidate : NSObject
{
    NSString *_candidateString;	// 8 = 0x8
    struct _NSRange _selectedRange;	// 16 = 0x10
    NSTextCheckingResult *_result;	// 32 = 0x20
    double _openTime;	// 40 = 0x28
    double _closeTime;	// 48 = 0x30
    _Bool _isOpen;	// 56 = 0x38
}

+ (id)openTypologyCandidate:(id)arg1 selectedRange:(struct _NSRange)arg2 inString:(id)arg3;	// IMP=0x006000000001a26d
- (void)closeTypologyCandidateWithResult:(id)arg1;	// IMP=0x000000000001a3e3
- (id)dictionaryRepresentation;	// IMP=0x000000000001a306
- (void)dealloc;	// IMP=0x000000000001a223
- (id)description;	// IMP=0x000000000001a158
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001a0dd

@end
