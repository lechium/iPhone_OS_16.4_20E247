//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVTokenizer, NSString;

@interface KVSkitInjector : NSObject
{
    KVTokenizer *_tokenizer;	// 8 = 0x8
    struct Indexer _indexer;	// 16 = 0x10
    struct Searcher _searcher;	// 120 = 0x78
    struct vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> _documents;	// 168 = 0xa8
}

- (id).cxx_construct;	// IMP=0x000000000001ffbc
- (void).cxx_destruct;	// IMP=0x000000000001ff1c
- (_Bool)setItems:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001feae
- (_Bool)supportsMultiUser;	// IMP=0x000000000001fea6
- (id)accessReadOnlySkitForUser:(id)arg1;	// IMP=0x000000000001fe9d
- (void)prewarm;	// IMP=0x000000000001fe97
- (id)matchSpans:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fcdd
- (id)indexLocale;	// IMP=0x000000000001fcc7
- (_Bool)_buildDocumentsFromItems:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f42f
- (id)init;	// IMP=0x000000000001f3cb
- (id)initWithItems:(id)arg1 tokenizer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001eb70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
