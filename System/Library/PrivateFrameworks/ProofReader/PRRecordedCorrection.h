//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRRecordedCorrection : NSObject
{
    NSTextCheckingResult *_correctionResult;	// 8 = 0x8
    NSString *_correctedString;	// 16 = 0x10
    _Bool _hasRecordedResponse;	// 24 = 0x18
}

@property _Bool hasRecordedResponse; // @synthesize hasRecordedResponse=_hasRecordedResponse;
- (id)correctedString;	// IMP=0x000000000002d6e8
- (id)correctionResult;	// IMP=0x000000000002d6de
- (id)description;	// IMP=0x000000000002d677
- (void)dealloc;	// IMP=0x000000000002d62d
- (id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2;	// IMP=0x000000000002d5af

@end
