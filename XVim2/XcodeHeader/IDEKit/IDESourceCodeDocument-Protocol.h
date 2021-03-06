//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTTextDocumentLocation, NSString;

@protocol IDESourceCodeDocument <NSObject>
- (BOOL)hasMultiLineAnnotationHighlight;
- (DVTTextDocumentLocation *)documentLocationWithLastLineRangeAtLocation:(DVTTextDocumentLocation *)arg1;
- (DVTTextDocumentLocation *)documentLocation:(DVTTextDocumentLocation *)arg1 byUnion:(DVTTextDocumentLocation *)arg2;
- (DVTTextDocumentLocation *)documentLocationWithEnclosingLineRangeAtLocation:(DVTTextDocumentLocation *)arg1;
- (DVTTextDocumentLocation *)insertCharactersAfterLocation:(DVTTextDocumentLocation *)arg1 withString:(NSString *)arg2;
- (DVTTextDocumentLocation *)insertCharactersBeforeLocation:(DVTTextDocumentLocation *)arg1 withString:(NSString *)arg2;
- (DVTTextDocumentLocation *)replaceCharactersAtLocation:(DVTTextDocumentLocation *)arg1 withString:(NSString *)arg2;
@end

