//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VUIMutableBookmark
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000245ef1
- (void)setIsMarkedAsUnwatched:(_Bool)arg1;	// IMP=0x0000000000245fd0
- (void)setHasBeenRented:(_Bool)arg1;	// IMP=0x0000000000245fbe
- (void)setHasBeenPlayed:(_Bool)arg1;	// IMP=0x0000000000245fac
- (void)setPlayCount:(unsigned long long)arg1;	// IMP=0x0000000000245f9a
- (void)setBookmarkTimestamp:(id)arg1;	// IMP=0x0000000000245f6a
- (void)setBookmarkTime:(double)arg1;	// IMP=0x0000000000245ef9

@end
