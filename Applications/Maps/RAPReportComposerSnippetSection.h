//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPQuestion;
@protocol RAPSnippetProtocol;

@interface RAPReportComposerSnippetSection
{
    RAPQuestion<RAPSnippetProtocol> *_question;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000ba314c
- (double)heightForRowAtIndex:(long long)arg1;	// IMP=0x0010000000ba2f99
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000ba2cc2
- (_Bool)isCurrentLocation;	// IMP=0x0010000000ba2c2a
- (long long)rowsCount;	// IMP=0x0010000000ba2bfd
- (id)headerTitle;	// IMP=0x0010000000ba2b01
- (id)initWithQuestion:(id)arg1;	// IMP=0x0010000000ba2a5c

@end
