//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary
{
    ML3DatabaseConnection *_connection;	// 8 = 0x8
    NSMutableDictionary *_dirtyInserts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000094b85
- (id)keyEnumerator;	// IMP=0x0000000000094b0a
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000094908
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000948eb
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000948ce
- (unsigned long long)count;	// IMP=0x0000000000094855
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000947d0

@end

