//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSDictionary *_item;	// 16 = 0x10
    struct Reader fMslReader;	// 24 = 0x18
    struct MemoryDelegate fMslReaderDelegate;	// 224 = 0xe0
    struct ReaderIterator fMslIterator;	// 248 = 0xf8
}

- (id).cxx_construct;	// IMP=0x0000000000120238
- (void).cxx_destruct;	// IMP=0x000000000012020a
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000011edfd
- (void)dealloc;	// IMP=0x000000000011edb3
- (id)initWithData:(id)arg1;	// IMP=0x000000000011ed42

@end

