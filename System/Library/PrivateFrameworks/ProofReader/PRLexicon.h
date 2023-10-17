//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLexicon : NSObject
{
    NSString *_localization;	// 8 = 0x8
    NSString *_unigramsPath;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    const void *_lexicon;	// 32 = 0x20
}

+ (id)lexiconWithName:(id)arg1 words:(id)arg2;	// IMP=0x0060000000061422
+ (id)lexiconWithLexicon:(const void *)arg1;	// IMP=0x00600000000613f3
+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2;	// IMP=0x00600000000613bf
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061baf
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061b4a
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061ae5
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;	// IMP=0x0000000000061934
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;	// IMP=0x0000000000061753
- (id)stringForTokenID:(unsigned int)arg1;	// IMP=0x0000000000061715
- (unsigned int)tokenIDForString:(id)arg1;	// IMP=0x0000000000061629
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000615d3
- (id)createCursor;	// IMP=0x00000000000615a5
- (struct _LXLexicon *)lexicon;	// IMP=0x000000000006159b
@property(readonly) NSString *name;
- (void)dealloc;	// IMP=0x0000000000061532
- (id)description;	// IMP=0x0000000000061456
- (id)initWithName:(id)arg1 words:(id)arg2;	// IMP=0x000000000006118f
- (id)initWithLexicon:(const void *)arg1;	// IMP=0x0000000000061126
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2;	// IMP=0x0000000000060fb4

@end
