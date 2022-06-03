#pragma once

struct SPRT_DAT
{
  /// PS2 Gs Register address
  long long int GsTex0;

  /// Shift the image content within the texture's frame
  unsigned short shift_x;
  unsigned short shift_y;

  /// Size of the frame for the texture
  unsigned short size_frame_x;
  unsigned short size_frame_y;

  /// Absolute coordinate of the texture's (upper-left corner) on the screen
  unsigned short offset_frame_x;
  unsigned short empty;
  unsigned short offset_frame_y;

  unsigned int field_0x16;
  unsigned short field_0x1A;
  unsigned char field_0x1C;
  unsigned char flip;
  unsigned char pad[2];
};