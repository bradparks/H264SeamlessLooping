//
//  BGDecodeEncode.h
//
//  Created by Mo DeJong on 7/6/16.
//
//  See license.txt for BSD license terms.
//
//  This module provides an easy to use background processing queue
//  that will decode frames from a H264 source and then re-encode the
//  frames as either opaque or transparent frames.

@import Foundation;

@import AVFoundation;
@import CoreVideo;
@import CoreImage;
@import CoreMedia;
@import VideoToolbox;

@interface BGDecodeEncode : NSObject

// Decompress and then recompress each frame of H264 video as keyframes that
// can be rendered directly without holding a stream decode resource open.

+ (NSArray*) recompressKeyframesOnBackgroundThread:(NSString*)resourceName
                                     frameDuration:(float)frameDuration
                                        renderSize:(CGSize)renderSize
                                        aveBitrate:(int)aveBitrate;

@end
