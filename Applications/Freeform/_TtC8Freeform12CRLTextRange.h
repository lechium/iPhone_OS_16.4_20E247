//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextRange.h>

@class MISSING_TYPE, NSString, _TtC8Freeform15CRLTextPosition;

@interface _TtC8Freeform12CRLTextRange : UITextRange
{
    MISSING_TYPE *range;	// 8 = 0x8
    MISSING_TYPE *caretAffinity;	// 24 = 0x18
}

+ (id)textRangeForEndOf:(id)arg1;	// IMP=0x00200000006d9160
+ (id)textRangeForStartOf:(id)arg1;	// IMP=0x00100000006d90a0
+ (id)textRangeForAllOf:(id)arg1;	// IMP=0x00100000006d9080
- (id)init;	// IMP=0x00400000006d9770
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006d96d0
- (id)textRangeByCollapsingToZeroLength;	// IMP=0x00100000006d95f0
- (id)textRangeByExpandingTo:(id)arg1;	// IMP=0x00100000006d94c0
- (_Bool)isAtParagraphBoundaryIn:(id)arg1;	// IMP=0x00100000006d9460
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x00100000006d9060
@property(nonatomic, readonly) long long length;
@property(nonatomic, readonly) _TtC8Freeform15CRLTextPosition *end;
@property(nonatomic, readonly) _TtC8Freeform15CRLTextPosition *start;
- (_Bool)isEmpty;	// IMP=0x00100000006d8da0
@property(nonatomic, readonly) _Bool isInsertionPointRange;
@property(nonatomic, readonly) struct _NSRange nsRange;

// Remaining properties
@property(nonatomic, readonly) _Bool empty;

@end

