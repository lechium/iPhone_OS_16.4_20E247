//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCClientState : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000032a4cc
- (id)description;	// IMP=0x000000000032a444
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000032a432
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000032a420
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000032a33f
- (id)objectForKey:(id)arg1;	// IMP=0x000000000032a1fe
- (id)dictionary;	// IMP=0x000000000032a0e6
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000329fef
- (id)init;	// IMP=0x0000000000329fd6

@end
