//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASSqliteDatabase;

__attribute__((visibility("hidden")))
@interface GDSQLFeatureRetriever : NSObject
{
    _PASSqliteDatabase *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002c5b4
- (id)featureKeysWithError:(id *)arg1;	// IMP=0x000000000002c432
- (id)featureForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c206
- (id)initWithDatabase:(id)arg1;	// IMP=0x000000000002c19b

@end
