//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCRelativePath;

__attribute__((visibility("hidden")))
@interface BRCDirectoryBreadthEnumerator : NSObject
{
    struct {
        int _field1;
        long long _field2;
        long long _field3;
        char *_field4;
        int _field5;
        long long _field6;
        long long _field7;
        int _field8;
        struct _opaque_pthread_mutex_t {
            long long _field1;
            char _field2[56];
        } _field9;
        struct _telldir *_field10;
    } *_dir;	// 8 = 0x8
    BRCRelativePath *_parentPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000027d8ba
- (void)dealloc;	// IMP=0x000000000027d86a
- (id)nextObjectWithIsDir:(_Bool *)arg1 error:(int *)arg2;	// IMP=0x000000000027d71e
- (id)initWithParentPath:(id)arg1 error:(int *)arg2;	// IMP=0x000000000027d298

@end

