//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLComponents.h"

__attribute__((visibility("hidden")))
@interface __NSConcreteURLComponents : NSURLComponents
{
    struct __CFURLComponents *_components;	// 8 = 0x8
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000511bd7
- (void)setPercentEncodedQueryItems:(id)arg1;	// IMP=0x00000000005135e8
- (id)percentEncodedQueryItems;	// IMP=0x0000000000513439
- (void)setQueryItems:(id)arg1;	// IMP=0x0000000000513244
- (id)queryItems;	// IMP=0x0000000000513095
- (struct _NSRange)rangeOfFragment;	// IMP=0x000000000051302b
- (struct _NSRange)rangeOfQuery;	// IMP=0x0000000000512fc1
- (struct _NSRange)rangeOfPath;	// IMP=0x0000000000512f57
- (struct _NSRange)rangeOfPort;	// IMP=0x0000000000512eed
- (struct _NSRange)rangeOfHost;	// IMP=0x0000000000512e83
- (struct _NSRange)rangeOfPassword;	// IMP=0x0000000000512e19
- (struct _NSRange)rangeOfUser;	// IMP=0x0000000000512daf
- (struct _NSRange)rangeOfScheme;	// IMP=0x0000000000512d45
- (void)setPercentEncodedFragment:(id)arg1;	// IMP=0x0000000000512c87
- (id)percentEncodedFragment;	// IMP=0x0000000000512c36
- (void)setPercentEncodedQuery:(id)arg1;	// IMP=0x0000000000512b78
- (id)percentEncodedQuery;	// IMP=0x0000000000512b27
- (void)setPercentEncodedPath:(id)arg1;	// IMP=0x0000000000512a69
- (id)percentEncodedPath;	// IMP=0x0000000000512a18
- (void)setEncodedHost:(id)arg1;	// IMP=0x000000000051295a
- (id)encodedHost;	// IMP=0x0000000000512909
- (void)setPercentEncodedHost:(id)arg1;	// IMP=0x000000000051284b
- (id)percentEncodedHost;	// IMP=0x00000000005127fa
- (void)setPercentEncodedPassword:(id)arg1;	// IMP=0x000000000051273c
- (id)percentEncodedPassword;	// IMP=0x00000000005126eb
- (void)setPercentEncodedUser:(id)arg1;	// IMP=0x000000000051262d
- (id)percentEncodedUser;	// IMP=0x00000000005125dc
- (void)setFragment:(id)arg1;	// IMP=0x0000000000512592
- (id)fragment;	// IMP=0x0000000000512541
- (void)setQuery:(id)arg1;	// IMP=0x00000000005124f7
- (id)query;	// IMP=0x00000000005124a6
- (void)setPath:(id)arg1;	// IMP=0x000000000051245c
- (id)path;	// IMP=0x000000000051240b
- (void)setPort:(id)arg1;	// IMP=0x00000000005122d0
- (id)port;	// IMP=0x000000000051227f
- (void)setHost:(id)arg1;	// IMP=0x0000000000512235
- (id)host;	// IMP=0x00000000005121e4
- (void)setPassword:(id)arg1;	// IMP=0x000000000051219a
- (id)password;	// IMP=0x0000000000512149
- (void)setUser:(id)arg1;	// IMP=0x00000000005120ff
- (id)user;	// IMP=0x00000000005120ae
- (void)setScheme:(id)arg1;	// IMP=0x0000000000511ff0
- (id)scheme;	// IMP=0x0000000000511f9f
- (id)string;	// IMP=0x0000000000511f4e
- (id)URLRelativeToURL:(id)arg1;	// IMP=0x0000000000511efa
- (id)URL;	// IMP=0x0000000000511ea9
- (id)initWithString:(id)arg1;	// IMP=0x0000000000511d8e
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;	// IMP=0x0000000000511c68
- (id)init;	// IMP=0x0000000000511bdf
- (id)description;	// IMP=0x0000000000511a94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005119fc
- (void)dealloc;	// IMP=0x0000000000511987
- (unsigned long long)hash;	// IMP=0x0000000000511966
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000511905

@end
