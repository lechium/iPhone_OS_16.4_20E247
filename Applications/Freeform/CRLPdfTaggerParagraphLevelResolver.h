//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLPdfTagger;

@interface CRLPdfTaggerParagraphLevelResolver : NSObject
{
    CRLPdfTagger *_tagger;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000052492d
@property(readonly, nonatomic) __weak CRLPdfTagger *tagger; // @synthesize tagger=_tagger;
- (_Bool)paragraphInfo:(id)arg1 matchesParagraphInfo:(id)arg2 level:(int)arg3;	// IMP=0x0010000000524515
- (int)levelOfCurrentParagraph:(id *)arg1;	// IMP=0x0010000000524151
- (int)tagType;	// IMP=0x0010000000523d8d
- (id)initWithTagger:(id)arg1;	// IMP=0x0010000000523d15

@end

