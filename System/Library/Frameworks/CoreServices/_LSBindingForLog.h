//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _LSDatabase;

__attribute__((visibility("hidden")))
@interface _LSBindingForLog : NSObject
{
    _LSDatabase *_db;	// 8 = 0x8
    struct LSBinding _binding;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000005c7d7
- (void).cxx_destruct;	// IMP=0x000000000005c7a6
- (id)redactedDescription;	// IMP=0x000000000005c75b
- (id)description;	// IMP=0x000000000005c680
- (id)initWithState:(const void *)arg1 binding:(const struct LSBinding *)arg2;	// IMP=0x000000000005c5f9

@end

