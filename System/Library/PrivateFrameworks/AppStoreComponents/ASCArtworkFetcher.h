//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCTaskCoordinator, NSURLSession;

__attribute__((visibility("hidden")))
@interface ASCArtworkFetcher : NSObject
{
    NSURLSession *_urlSession;	// 8 = 0x8
    double _scale;	// 16 = 0x10
    ASCTaskCoordinator *_fetchCoordinator;	// 24 = 0x18
}

+ (id)sharedFetcher;	// IMP=0x00400000000177b6
- (void).cxx_destruct;	// IMP=0x00000000000183de
@property(readonly, nonatomic) ASCTaskCoordinator *fetchCoordinator; // @synthesize fetchCoordinator=_fetchCoordinator;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (id)imageForContentsOfArtwork:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000001808b
- (id)imageWithContentsOfURL:(id)arg1;	// IMP=0x0000000000017e0c
- (id)dataWithContentsOfURL:(id)arg1;	// IMP=0x0000000000017c0c
- (id)URLWithContentsOfArtwork:(id)arg1 preferredSize:(struct CGSize)arg2;	// IMP=0x000000000001797c
- (id)initWithURLSession:(id)arg1 scale:(double)arg2;	// IMP=0x00000000000178d1

@end

