//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HDCachedSourceOrder : NSObject
{
    _Bool _userOrdered;	// 8 = 0x8
    _Bool _isDefaultSourceOrder;	// 9 = 0x9
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> _orderedSources;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000026b293
- (void).cxx_destruct;	// IMP=0x000000000026b285
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026b16e
- (id)description;	// IMP=0x000000000026aff0
- (id)init;	// IMP=0x000000000026af59

@end

